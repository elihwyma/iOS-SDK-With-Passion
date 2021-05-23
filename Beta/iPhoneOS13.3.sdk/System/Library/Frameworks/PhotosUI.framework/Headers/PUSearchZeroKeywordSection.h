/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PUSearchZeroKeywordSection : NSObject

{
    long long _sectionType;
    NSArray *_viewModels;
}

@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly) NSArray *viewModels;

- (id)description;
- (void)removeItem:(id)arg1;
- (id)initWithType:(long long)arg1 viewModels:(id)arg2;

@end
