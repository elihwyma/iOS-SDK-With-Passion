/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class OADBackground;

__attribute__((visibility("hidden")))
@interface PMBackgroundMapper : CMMapper

{
    OADBackground *mBackground;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)slideRect;
- (id)initWithOadBackground:(id)arg1 parent:(id)arg2;

@end
