/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class CDDCloudKitMessage, NSError;

__attribute__((visibility("hidden")))
@interface CDDCloudKitResponse : NSObject <Swift>

{
    _Bool _success;
    CDDCloudKitMessage *_message;
    NSError *_error;
}

@property (nonatomic, readonly) CDDCloudKitMessage *message;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)supportedErrorClasses;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 success:(_Bool)arg2 error:(id)arg3;

@end
