/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUNode, NUSizer;

@interface NUComponent : NSObject

{
    id <NUNode> _node;
    id <NUSizer> _sizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NUNode> node;
@property (nonatomic, readonly) id <NUSizer> sizer;

+ (id)componentWithSizer:(id)arg1 node:(id)arg2;

- (id)initWithSizer:(id)arg1 node:(id)arg2;

@end
