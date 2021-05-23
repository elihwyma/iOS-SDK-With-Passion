/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebOptGroup : NSObject

{
    id <UIWebSelectedItemPrivate> _group;
    NSArray *_options;
    long long _offset;
}

@property (nonatomic, readonly) long long offset;
@property (retain, nonatomic) id <UIWebSelectedItemPrivate> group;
@property (retain, nonatomic) NSArray *options;

- (void)dealloc;
- (id)initWithGroup:(id)arg1 itemOffset:(long long)arg2;

@end
