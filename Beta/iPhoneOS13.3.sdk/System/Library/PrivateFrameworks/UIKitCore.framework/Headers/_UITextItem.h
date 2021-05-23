/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSTextAttachment, NSURL;

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UITextItem : NSObject

{
    id <UICoordinateSpace> _coordinateSpace;
    NSArray *_rects;
    long long _type;
    NSURL *_link;
    NSTextAttachment *_attachment;
    struct _NSRange _range;
}

@property (retain, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property (retain, nonatomic) NSArray *rects;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic) NSTextAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
