/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject

{
    long long _version;
    NSArray *_engagementMessages;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSArray *engagementMessages;

- (id)initWithDictionary:(id)arg1;

@end
