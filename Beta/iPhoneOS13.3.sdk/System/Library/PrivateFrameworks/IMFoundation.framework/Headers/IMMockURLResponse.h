/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSHTTPURLResponse, NSString;

@interface IMMockURLResponse : NSObject

{
    NSHTTPURLResponse *_response;
    NSData *_data;
    NSString *_requestBodyKeyPath;
    NSString *_mockID;
}

@property (retain) NSHTTPURLResponse *response;
@property (retain) NSData *data;
@property (copy) NSString *requestBodyKeyPath;
@property (copy) NSString *mockID;

+ (_Bool)supportsSecureCoding;
+ (id)objectFromPlist:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
