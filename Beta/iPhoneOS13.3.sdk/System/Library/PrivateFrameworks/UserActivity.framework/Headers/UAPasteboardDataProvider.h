/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

#import <UserActivity/Swift-Protocol.h>

@class NSData, NSString, NSUUID;

@interface UAPasteboardDataProvider : NSObject <Swift>

{
    NSString *_type;
    NSUUID *_uuid;
    NSData *_data;
}

@property (retain, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;

- (id)initWithData:(id)arg1 type:(id)arg2;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
