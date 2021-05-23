/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADCharacterProperties;

__attribute__((visibility("hidden")))
@interface OADTextRun : NSObject

{
    OADCharacterProperties *mProperties;
}

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (id)properties;
- (void)setProperties:(id)arg1;
- (unsigned long long)characterCount;
- (void)removeUnnecessaryOverrides;
- (_Bool)isSimilarToTextRun:(id)arg1;

@end
