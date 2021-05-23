/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction

{
    int _absoluteOrder;
    NSURL *_priorURL;
}

@property (nonatomic, readonly) int absoluteOrder;
@property (retain, nonatomic) NSURL *priorURL;

- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;

@end
