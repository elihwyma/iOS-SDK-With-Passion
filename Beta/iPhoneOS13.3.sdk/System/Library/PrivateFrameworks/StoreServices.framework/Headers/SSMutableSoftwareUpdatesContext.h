/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSoftwareUpdatesContext.h>

@class NSArray, NSString;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext

@property (copy, nonatomic) NSString *clientIdentifierHeader;
@property (nonatomic, getter=isForced) _Bool forced;
@property (copy, nonatomic) NSArray *softwareTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
