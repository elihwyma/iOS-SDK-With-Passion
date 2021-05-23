/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

#import <Foundation/NSObject.h>

@class SUBDescriptor, SUBProgress;

@interface SUBDownload : NSObject

{
    SUBDescriptor *_descriptor;
    SUBProgress *_progress;
}

@property (retain, nonatomic) SUBDescriptor *descriptor;
@property (retain, nonatomic) SUBProgress *progress;

+ (_Bool)supportsSecureCoding;
+ (id)downloadWithDescriptor:(id)arg1 andProgress:(id)arg2;

- (id)description;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
