#pragma once

#include "textures/mvStaticTexture.h"
#include "textures/mvDynamicTexture.h"
#include "textures/mvTextureContainer.h"

#include "handlers/mvHandlerRegistry.h"
#include "handlers/mvKeyDownHandler.h"
#include "handlers/mvKeyPressHandler.h"
#include "handlers/mvKeyReleaseHandler.h"
#include "handlers/mvMouseMoveHandler.h"
#include "handlers/mvMouseWheelHandler.h"
#include "handlers/mvMouseClickHandler.h"
#include "handlers/mvMouseDoubleClickHandler.h"
#include "handlers/mvMouseDownHandler.h"
#include "handlers/mvMouseReleaseHandler.h"
#include "handlers/mvMouseDragHandler.h"

#include "widget_handlers/mvHoverHandler.h"
#include "widget_handlers/mvResizeHandler.h"
#include "widget_handlers/mvFocusHandler.h"
#include "widget_handlers/mvActiveHandler.h"
#include "widget_handlers/mvVisibleHandler.h"
#include "widget_handlers/mvActivatedHandler.h"
#include "widget_handlers/mvDeactivatedHandler.h"
#include "widget_handlers/mvEditedHandler.h"
#include "widget_handlers/mvDeactivatedAfterEditHandler.h"
#include "widget_handlers/mvToggledOpenHandler.h"
#include "widget_handlers/mvClickedHandler.h"

#include "basic/mvInputText.h"
#include "basic/mvRadioButton.h"
#include "basic/mvListbox.h"
#include "basic/mvCheckbox.h"
#include "basic/mvButton.h"
#include "basic/mvSelectable.h"
#include "basic/mvCombo.h"
#include "basic/mvInputSingle.h"
#include "basic/mvInputMulti.h"
#include "basic/mvSliderMulti.h"
#include "basic/mvSliderSingle.h"
#include "basic/mvDragSingle.h"
#include "basic/mvDragMulti.h"
#include "basic/mvColorButton.h"
#include "basic/mvColorEdit.h"
#include "basic/mvColorPicker.h"
#include "basic/mvText.h"
#include "basic/mvTabButton.h"
#include "basic/mvMenuItem.h"
#include "basic/mvImage.h"
#include "basic/mvImageButton.h"

#include "misc/mvProgressBar.h"
#include "misc/mvDummy.h"
#include "misc/mvSameLine.h"
#include "misc/mvSpacing.h"
#include "misc/mvSeparator.h"

#include "containers/mvFilterSet.h"
#include "containers/mvClipper.h"
#include "containers/mvStagingContainer.h"
#include "containers/mvTreeNode.h"
#include "containers/mvChild.h"
#include "containers/mvGroup.h"
#include "containers/mvCollapsingHeader.h"
#include "containers/mvTab.h"
#include "containers/mvTabBar.h"
#include "containers/mvMenu.h"
#include "containers/mvMenuBar.h"
#include "containers/mvTooltip.h"
#include "containers/mvWindowAppItem.h"
#include "containers/mvPopup.h"
#include "containers/mvDragPayload.h"

#include "tables/mvTable.h"
#include "tables/mvTableColumn.h"
#include "tables/mvTableNextColumn.h"
#include "tables/mvTableRow.h"

#include "drawing/mvDrawlist.h"
#include "drawing/mvDrawLine.h"
#include "drawing/mvDrawArrow.h"
#include "drawing/mvDrawTriangle.h"
#include "drawing/mvDrawCircle.h"
#include "drawing/mvDrawEllipse.h"
#include "drawing/mvDrawBezierCubic.h"
#include "drawing/mvDrawBezierQuadratic.h"
#include "drawing/mvDrawQuad.h"
#include "drawing/mvDrawRect.h"
#include "drawing/mvDrawText.h"
#include "drawing/mvDrawPolygon.h"
#include "drawing/mvDrawPolyline.h"
#include "drawing/mvDrawImage.h"
#include "drawing/mvDrawLayer.h"
#include "drawing/mvViewportDrawlist.h"

#include "custom/mvTimePicker.h"
#include "custom/mvDatePicker.h"
#include "custom/mvColorMapScale.h"
#include "custom/mvSlider3D.h"
#include "custom/mvKnob.h"
#include "custom/mvLoadingIndicator.h"

#include "composite/mvFileDialog.h"
#include "composite/mvFileExtension.h"

#include "plots/mvPlot.h"
#include "plots/mvPlotLegend.h"
#include "plots/mvPlotAxis.h"
#include "plots/mvDragPoint.h"
#include "plots/mvDragLine.h"
#include "plots/mvAnnotation.h"

#include "plots/mvSimplePlot.h"
#include "plots/mvLineSeries.h"
#include "plots/mvBarSeries.h"
#include "plots/mvScatterSeries.h"
#include "plots/mvAreaSeries.h"
#include "plots/mvStemSeries.h"
#include "plots/mvLabelSeries.h"
#include "plots/mvPieSeries.h"
#include "plots/mvShadeSeries.h"
#include "plots/mvErrorSeries.h"
#include "plots/mvHeatSeries.h"
#include "plots/mvImageSeries.h"
#include "plots/mvStairSeries.h"
#include "plots/mvCandleSeries.h"
#include "plots/mvInfiniteLineSeries.h"
#include "plots/mvHistogramSeries.h"
#include "plots/mv2dHistogramSeries.h"

#include "nodes/mvNodeEditor.h"
#include "nodes/mvNode.h"
#include "nodes/mvNodeAttribute.h"
#include "nodes/mvNodeLink.h"

#include "fonts/mvFont.h"
#include "fonts/mvFontRegistry.h"

#include "themes/mvTheme.h"
#include "themes/mvThemeColor.h"