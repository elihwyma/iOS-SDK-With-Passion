/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@protocol OAXClient

+ (unsigned short)sourceDrawableIsTopLevel: /* Error: Ran out of types for this method. */;

- (unsigned short)readClientDataFromNode:toDrawable:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readClientDataFromShapeNode:toShape:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readClientDataFromPictureNode:toImage:state: /* Error: Ran out of types for this method. */;
- (unsigned short)postprocessHyperlink:relationship:state: /* Error: Ran out of types for this method. */;
- (unsigned short)genericNonVisualPropertiesNodeForDrawableNode:inNamespace:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readClientDrawableFromXmlNode:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readBlipExtWithURI:fromNode:toDrawable:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readOle:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readGraphicData:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readClientDataFromGraphicalFramePropertiesNode:toDrawable:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readClientDataFromGroupNode:toGroup:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readClientTextField:identity:paragraph:state: /* Error: Ran out of types for this method. */;
- (unsigned short)readClientDataFromGraphicDataNode:toDiagram:state: /* Error: Ran out of types for this method. */;

@end
