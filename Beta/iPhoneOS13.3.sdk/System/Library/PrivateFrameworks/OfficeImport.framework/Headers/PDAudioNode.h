/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDMediaNode.h>

__attribute__((visibility("hidden")))
@interface PDAudioNode : PDMediaNode

{
    _Bool mIsNarration;
}

- (_Bool)isNarration;
- (void)setIsNarration:(_Bool)arg1;

@end
