/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGGridLayout.h>

@class NSArray, NSDictionary, NSString;

@interface PXGPPTStringsLayout : PXGGridLayout

{
    NSArray *_strings;
    NSDictionary *_attributes;
}

@property (copy, nonatomic) NSArray *strings;
@property (copy, nonatomic) NSDictionary *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)initWithStringCount:(unsigned long long)arg1 localeCodes:(id)arg2;

@end
