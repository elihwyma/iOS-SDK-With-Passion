/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICEResultQuery : NSObject

{
    unsigned int callID;
    struct tagCONNRESULT *result;
    _Bool isQueryAnswered;
}

@property struct tagCONNRESULT *result;
@property unsigned int callID;
@property _Bool isQueryAnswered;

- (void)dealloc;
- (id)initWithResult:(struct tagCONNRESULT *)arg1;
- (id)initWithCallID:(unsigned int)arg1;

@end
