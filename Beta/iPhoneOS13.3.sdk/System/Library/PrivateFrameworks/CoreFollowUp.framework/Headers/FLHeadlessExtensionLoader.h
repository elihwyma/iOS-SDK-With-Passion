/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class FLExtensionContext, NSExtension, NSString, NSUUID;

@protocol FLExtensionHostContextInterface;

@interface FLHeadlessExtensionLoader : NSObject

{
    FLExtensionContext *_extensionContext;
    id <FLExtensionHostContextInterface> _delegate;
    NSExtension *_extension;
    CDUnknownBlockType _requestInterruptionBlock;
    NSString *_identifier;
    NSUUID *_sessionID;
}

@property (nonatomic, readonly) NSExtension *extension;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) CDUnknownBlockType requestInterruptionBlock;

+ (id)sharedExtensionQueue;

- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)remoteInterface;
- (id)_loadExtensionForIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_loadExtension:(id *)arg1;
- (_Bool)_setupSessionIfNeeded:(id *)arg1;
- (id)_hostContextForExtension:(id)arg1;
- (void)_terminate;
- (id)initWithFollowUp:(id)arg1 andDelegate:(id)arg2;

@end
