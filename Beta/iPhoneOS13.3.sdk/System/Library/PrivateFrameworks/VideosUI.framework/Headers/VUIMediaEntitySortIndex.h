/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitySortIndex : NSObject

{
    NSString *_title;
    unsigned long long _startIndex;
    unsigned long long _count;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) unsigned long long count;

- (id)init;
- (id)description;
- (id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;

@end
