/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <Swift>

{
    long long _entryType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, readonly) long long entryType;

+ (id)endEntry;
+ (id)startEntry;

- (id)itemResult;
- (id)trackingEntryResult;

@end
