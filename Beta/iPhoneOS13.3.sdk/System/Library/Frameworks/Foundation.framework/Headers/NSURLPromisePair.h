/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSURLPromisePair : NSObject <Swift>

{
    NSURL *_logicalURL;
    NSURL *_physicalURL;
}

@property (copy, readonly) NSURL *URL;
@property (readonly) NSURL *logicalURL;
@property (readonly) NSURL *physicalURL;

+ (_Bool)supportsSecureCoding;
+ (id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2;
+ (id)pairWithURL:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
