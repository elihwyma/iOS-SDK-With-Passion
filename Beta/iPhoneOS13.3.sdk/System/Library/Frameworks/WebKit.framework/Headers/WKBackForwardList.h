/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WKBackForwardListItem;

@interface WKBackForwardList : NSObject

{
    struct ObjectStorage<WebKit::WebBackForwardList> _list;
}

@property (nonatomic, readonly) WKBackForwardListItem *currentItem;
@property (nonatomic, readonly) WKBackForwardListItem *backItem;
@property (nonatomic, readonly) WKBackForwardListItem *forwardItem;
@property (copy, nonatomic, readonly) NSArray *backList;
@property (copy, nonatomic, readonly) NSArray *forwardList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (id)itemAtIndex:(long long)arg1;
- (void)_clear;
- (void)_removeAllItems;

@end
