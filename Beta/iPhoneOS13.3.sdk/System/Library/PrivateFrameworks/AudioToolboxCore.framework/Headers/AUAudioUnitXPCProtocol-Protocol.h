/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/Swift-Protocol.h>

@protocol AUAudioUnitXPCProtocol <Swift>

- (unsigned short)reset: /* Error: Ran out of types for this method. */;
- (unsigned short)open: /* Error: Ran out of types for this method. */;
- (unsigned short)close: /* Error: Ran out of types for this method. */;
- (unsigned short)getBusses:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)initialize:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)initialize2:formats:maxFrames:buffer:bufferSize:beginSem:endSem:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setWorkIntervalPort:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)uninitialize: /* Error: Ran out of types for this method. */;
- (unsigned short)setBusFormat:scope:format:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setBusCount:scope:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForProperty:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)addPropertyObserver:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removePropertyObserver:context:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKey:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getParameterTree: /* Error: Ran out of types for this method. */;
- (unsigned short)getParameter:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)parameterStringFromValue:currentValue:address:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)parameterValueFromString:address:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)parameterNode:displayNameWithLength:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)parametersForOverviewWithCount:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedViewConfigurations:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)selectViewConfiguration:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)profileStateForCable:channel:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)enableProfile:cable:onChannel:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)disableProfile:cable:onChannel:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)loadUserPresets: /* Error: Ran out of types for this method. */;
- (unsigned short)saveUserPreset:state:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserPreset:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)presetStateFor:reply: /* Error: Ran out of types for this method. */;

@end
