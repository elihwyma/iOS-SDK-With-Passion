/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIUserModelDataStoring <Swift>

- (unsigned short)getAllValuesForKey:forInputMode:sinceDate: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllValuesForKeyPrefix:forInputMode:sinceDate: /* Error: Ran out of types for this method. */;
- (unsigned short)addValue:andSecondaryValue:andRealValue:andProperties:forKey:forInputMode:forDate: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeDataForKey:forInputMode:beforeDate: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeDataForKeyPrefix:forInputMode:beforeDate: /* Error: Ran out of types for this method. */;
- (unsigned short)getInputModesForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllKnownInputModes;
- (unsigned short)updateDurableValue:forKey:forDate: /* Error: Ran out of types for this method. */;
- (unsigned short)getDurableValueForKey: /* Error: Ran out of types for this method. */;

@end
