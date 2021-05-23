/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODIHorizonalList3.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ODITitlePoint : ODIHorizonalList3

{
    NSString *mTitlePointPresentationName;
}

- (id)initWithTitlePointPresentationName:(id)arg1 state:(id)arg2;
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;

@end
