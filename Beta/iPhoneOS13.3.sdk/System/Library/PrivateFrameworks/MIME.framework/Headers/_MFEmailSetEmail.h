/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MFEmailSetEmail : NSObject

{
    unsigned long long _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}

@property (nonatomic, readonly) unsigned long long hash;
@property (retain, nonatomic) NSString *address;
@property (nonatomic, readonly) NSString *commentedAddress;

- (void)dealloc;
- (id)description;
- (id)initWithAddress:(id)arg1;
- (_Bool)isEqualToEmail:(id)arg1;

@end
