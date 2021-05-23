/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFDAMessageStore, MFError, NSData, NSString;

@interface _MFDAMessageHeaderFetchConsumer : NSObject

{
    _Bool _succeeded;
    MFError *_error;
    NSData *_data;
    MFDAMessageStore *_store;
}

@property (nonatomic, readonly) _Bool succeeded;
@property (retain, nonatomic) MFError *error;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) MFDAMessageStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleResponse:(id)arg1 error:(id)arg2;
- (_Bool)wantsData;

@end
