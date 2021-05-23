/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@protocol MFDeviceDriver

- (unsigned short)createPath;
- (unsigned short)createFont: /* Error: Ran out of types for this method. */;
- (unsigned short)createPen:in_width:in_colour:in_userStyleArray: /* Error: Ran out of types for this method. */;
- (unsigned short)createSolidBrush: /* Error: Ran out of types for this method. */;
- (unsigned short)extTextOut:px:py:in_text:options:left:top:right:bottom:spacingValues:numValues: /* Error: Ran out of types for this method. */;
- (unsigned short)polyline:in_points:in_count: /* Error: Ran out of types for this method. */;
- (unsigned short)rectangle:x1:y1:x2:y2: /* Error: Ran out of types for this method. */;
- (unsigned short)stretchBlt:in_xDest:in_yDest:in_widthDest:in_heightDest:in_sourceImage:in_xSrc:in_ySrc:in_widthSrc:in_heightSrc:in_rop:in_xform:in_colour: /* Error: Ran out of types for this method. */;
- (unsigned short)patBlt:in_x:in_y:in_width:in_height:in_rop: /* Error: Ran out of types for this method. */;
- (unsigned short)bitBlt:in_xDest:in_yDest:in_widthDest:in_heightDest:in_sourceImage:in_xSrc:in_ySrc:in_rop:in_xform:in_colour: /* Error: Ran out of types for this method. */;
- (unsigned short)textOut:px:py:in_text: /* Error: Ran out of types for this method. */;
- (unsigned short)arc:nLeftRect:nTopRect:nRightRect:nBottomRect:nXStartArc:nYStartArc:nXEndArc:nYEndArc: /* Error: Ran out of types for this method. */;
- (unsigned short)arcTo:nLeftRect:nTopRect:nRightRect:nBottomRect:nXStartArc:nYStartArc:nXEndArc:nYEndArc: /* Error: Ran out of types for this method. */;
- (unsigned short)angleArc:x:y:radius:startAngle:sweepAngle: /* Error: Ran out of types for this method. */;
- (unsigned short)pie:nLeftRect:nTopRect:nRightRect:nBottomRect:nXStartArc:nYStartArc:nXEndArc:nYEndArc: /* Error: Ran out of types for this method. */;
- (unsigned short)chord:leftRect:topRect:rightRect:bottomRect:xStartArc:yStartArc:xEndArc:yEndArc: /* Error: Ran out of types for this method. */;
- (unsigned short)polyPolyline:in_points:in_polyCounts:in_count: /* Error: Ran out of types for this method. */;
- (unsigned short)polygon:in_points:in_count: /* Error: Ran out of types for this method. */;
- (unsigned short)polyPolygon:in_points:in_polyCounts:in_count: /* Error: Ran out of types for this method. */;
- (unsigned short)lineTo:x:y: /* Error: Ran out of types for this method. */;
- (unsigned short)fillRectangle:x1:y1:x2:y2: /* Error: Ran out of types for this method. */;
- (unsigned short)roundRect:left:top:right:bottom:rx:ry: /* Error: Ran out of types for this method. */;
- (unsigned short)ellipse:x1:y1:x2:y2: /* Error: Ran out of types for this method. */;
- (unsigned short)bezierTo:x:y:x2:y2:x3:y3: /* Error: Ran out of types for this method. */;
- (unsigned short)bezier:x:y:x2:y2:x3:y3:x4:y4: /* Error: Ran out of types for this method. */;
- (unsigned short)setViewBox:top:width:height: /* Error: Ran out of types for this method. */;
- (unsigned short)activateTransform: /* Error: Ran out of types for this method. */;
- (unsigned short)excludeClipRect: /* Error: Ran out of types for this method. */;
- (unsigned short)intersectClipRect: /* Error: Ran out of types for this method. */;
- (unsigned short)setMetaRgn;
- (unsigned short)alphaBlend:in_xDest:in_yDest:in_widthDest:in_heightDest:in_sourceImage:in_xSrc:in_ySrc:in_widthSrc:in_heightSrc:in_sourceConstantOpacity:in_useSourceAlphaChannel:in_xform:in_colour: /* Error: Ran out of types for this method. */;
- (unsigned short)maskBlt:in_xDest:in_yDest:in_widthDest:in_heightDest:in_sourceImage:in_xSrc:in_ySrc:in_maskImage:in_xMask:in_yMask:in_rop:in_xform:in_colour: /* Error: Ran out of types for this method. */;
- (unsigned short)plgBlt:in_destinationParallelogram:in_sourceImage:in_xSrc:in_ySrc:in_widthSrc:in_heightSrc:in_maskImage:in_xMask:in_yMask:in_xform:in_colour: /* Error: Ran out of types for this method. */;
- (unsigned short)createHatchBrush:in_hatchstyle: /* Error: Ran out of types for this method. */;
- (unsigned short)createPatternBrush:usePaletteForBilevel: /* Error: Ran out of types for this method. */;
- (unsigned short)createNullBrush;
- (unsigned short)createPen;
- (unsigned short)createFont:lfWidth:lfEscapement:lfOrientation:lfWeight:lfItalic:lfUnderline:lfStrikeOut:lfCharSet:lfOutPrecision:lfClipPrecision:lfQuality:pitch:family:lfFaceName: /* Error: Ran out of types for this method. */;
- (unsigned short)createFontIndirectW:lfWidth:lfEscapement:lfOrientation:lfWeight:lfItalic:lfUnderline:lfStrikeOut:lfCharSet:lfOutPrecision:lfClipPrecision:lfQuality:pitch:family:lfFaceName:elfFullName:elfStyle:elfVersion:elfStyleSize:elfMatch:elfVendorId:elfCulture: /* Error: Ran out of types for this method. */;
- (unsigned short)createRegionWithRects:in_dc: /* Error: Ran out of types for this method. */;
- (unsigned short)createRegionWithPath: /* Error: Ran out of types for this method. */;
- (unsigned short)createDIBitmap:in_dib:in_dibSize:in_usage: /* Error: Ran out of types for this method. */;
- (unsigned short)createDIBitmap:in_header:in_headerSize:in_bitmap:in_bitmapSize:in_usage: /* Error: Ran out of types for this method. */;
- (unsigned short)createBitmap:in_width:in_height:in_planes:in_bitsPerPixel:in_bitmap:in_bitmapSize: /* Error: Ran out of types for this method. */;

@end
