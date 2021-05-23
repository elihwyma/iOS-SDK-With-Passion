/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADSubBlip;

__attribute__((visibility("hidden")))
@interface OADBlip : NSObject

{
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned int *)referenceCount;
- (id)mainSubBlip;
- (void)setMainSubBlip:(id)arg1;
- (void)setAltSubBlip:(id)arg1;
- (id)altSubBlip;

@end
