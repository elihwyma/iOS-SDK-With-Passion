/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADCountedGraphicFeature : NSObject

{
    id mFeature;
    unsigned long long mUsageCount;
}

@property (nonatomic) unsigned long long usageCount;

- (void)dealloc;
- (id)feature;
- (id)initWithFeature:(id)arg1;
- (void)incrementUsageCount;
- (long long)compareUsageCount:(id)arg1;

@end
