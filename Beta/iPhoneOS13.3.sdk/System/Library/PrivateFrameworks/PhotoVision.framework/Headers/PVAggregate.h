/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PVAggregate : NSObject

{
    NSString *_primaryDomain;
}

@property (retain, nonatomic) NSString *primaryDomain;

+ (id)sharedAggregate;

- (void)recordValue:(id)arg1 forKey:(id)arg2;
- (id)_allRegisteredKeys;
- (id)_registeredKeysLookupTable;
- (id)_distributionKeys;
- (id)_scalarToAddKeys;
- (id)_needsParsingKeys;
- (id)_stringValueTypeKeys;
- (id)_doubleValueTypeKeys;
- (id)_getSubdomain:(id)arg1;
- (id)_aggdMethodConstructionHints;
- (id)_messageTracerMethodConstructionHints;
- (void)_recordAGGDValue:(id)arg1 forKey:(id)arg2;
- (void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2;
- (id)_aggdMethodConstructionHintsForKey:(id)arg1;
- (id)_messageTracerMethodConstructionHintsForKey:(id)arg1;
- (id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2;
- (id)_registeredKeysForLibraryDomain;
- (id)_noOpRegisteredKeysForOSXLibraryDomain;

@end
