/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface CDDCloudKitMessage : NSObject <Swift>

{
    NSUUID *_identifier;
}

@property (nonatomic, readonly) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
