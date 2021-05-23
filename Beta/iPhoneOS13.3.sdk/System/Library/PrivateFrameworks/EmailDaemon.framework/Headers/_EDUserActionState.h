/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol ECMessage;

@interface _EDUserActionState : NSObject

{
    _Bool _scrolledToEnd;
    _Bool _mutedThread;
    NSDate *_viewingStarted;
    id <ECMessage> _message;
    NSString *_key;
    NSString *_cellStyle;
    NSString *_messageListType;
    long long _row;
}

@property (retain, nonatomic) NSDate *viewingStarted;
@property (retain, nonatomic) id <ECMessage> message;
@property (nonatomic) _Bool scrolledToEnd;
@property (nonatomic) _Bool mutedThread;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *cellStyle;
@property (copy, nonatomic) NSString *messageListType;
@property (nonatomic) long long row;

@end
