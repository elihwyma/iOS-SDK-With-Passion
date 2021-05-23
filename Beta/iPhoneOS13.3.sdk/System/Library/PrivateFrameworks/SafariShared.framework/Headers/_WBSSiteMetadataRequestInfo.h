/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSOperation;

@protocol WBSSiteMetadataProvider;

@interface _WBSSiteMetadataRequestInfo : NSObject

{
    id <WBSSiteMetadataProvider> _provider;
    NSMutableSet *_tokens;
    NSOperation *_operation;
}

@property (nonatomic, readonly) id <WBSSiteMetadataProvider> provider;
@property (nonatomic, readonly) NSMutableSet *tokens;
@property (weak, nonatomic) NSOperation *operation;

- (void)dealloc;
- (id)initWithProvider:(id)arg1;

@end
