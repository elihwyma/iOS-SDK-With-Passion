/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVCMomentsRequestDelegate;

@interface AVCMomentsRequest : NSObject

{
    NSString *_transactionID;
    unsigned char _mediaType;
    id _delegate;
    unsigned char _mode;
    NSString *_requesterID;
    NSString *_requesteeID;
}

@property (nonatomic) NSObject<AVCMomentsRequestDelegate> *delegate;
@property (nonatomic) unsigned char mode;
@property (nonatomic, readonly) NSString *transactionID;
@property (nonatomic, readonly) unsigned char mediaType;
@property (nonatomic, readonly) NSString *requesterID;
@property (nonatomic, readonly) NSString *requesteeID;

- (void)dealloc;
- (id)description;
- (_Bool)validateWithError:(id *)arg1;
- (_Bool)startWithError:(id *)arg1;
- (id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3 transactionID:(id)arg4;
- (id)initWithMediaType:(unsigned char)arg1 requesterID:(id)arg2 requesteeID:(id)arg3;
- (_Bool)endWithError:(id *)arg1;
- (_Bool)rejectWithError:(id *)arg1;

@end
