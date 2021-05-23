/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface WPDPendingCompletions : NSObject

{
    NSMutableArray *_pendingCompletions;
    unsigned long long _lastID;
    NSString *_name;
}

@property (retain) NSMutableArray *pendingCompletions;
@property unsigned long long lastID;
@property (retain) NSString *name;

- (id)description;
- (id)initWithName:(id)arg1;
- (unsigned long long)addCompletion:(id)arg1;
- (void)completeID:(unsigned long long)arg1 success:(_Bool)arg2;

@end
