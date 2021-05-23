/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxParameterCreationAPI

- (unsigned short)addFloatSliderWithName:parmId:defaultValue:parameterMin:parameterMax:sliderMin:sliderMax:delta:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addIntSliderWithName:parmId:defaultValue:parameterMin:parameterMax:sliderMin:sliderMax:delta:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addToggleButtonWithName:parmId:defaultValue:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addAngleSliderWithName:parmId:defaultValue:parameterMin:parameterMax:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addColorParameterWithName:parmId:defaultRed:defaultGreen:defaultBlue:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addColorParameterWithName:parmId:defaultRed:defaultGreen:defaultBlue:defaultAlpha:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addPointParameterWithName:parmId:defaultX:defaultY:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addPopupMenuWithName:parmId:defaultValue:menuEntries:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addImageReferenceWithName:parmId:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)addCustomParameterWithName:parmId:defaultValue:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)startParameterSubGroup:parmId:parmFlags: /* Error: Ran out of types for this method. */;
- (unsigned short)endParameterSubGroup;

@end
