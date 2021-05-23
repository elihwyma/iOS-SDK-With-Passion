/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

#import <MediaServices/Swift-Protocol.h>

@interface MSVArtworkServiceRequest : NSObject <Swift>

@property (nonatomic, readonly) Class operationClass;
@property (nonatomic, readonly) long long operationPriority;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
