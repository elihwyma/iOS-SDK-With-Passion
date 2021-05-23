/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSArray, NSData, WFWebResource;

@interface WFWebArchive : NSObject <Swift>

{
    WFWebResource *_mainResource;
    NSArray *_subresources;
    NSArray *_subframeArchives;
}

@property (nonatomic, readonly) WFWebResource *mainResource;
@property (nonatomic, readonly) NSArray *subresources;
@property (nonatomic, readonly) NSArray *subframeArchives;
@property (nonatomic, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;

@end
