/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface MFFile : NSObject

{
    _Bool _isPurgeable;
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) _Bool isPurgeable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)initWithFile:(id)arg1 account:(id)arg2;
- (_Bool)_isPurgeableAccount:(id)arg1;
- (_Bool)markPurgeableWithError:(id *)arg1;

@end
