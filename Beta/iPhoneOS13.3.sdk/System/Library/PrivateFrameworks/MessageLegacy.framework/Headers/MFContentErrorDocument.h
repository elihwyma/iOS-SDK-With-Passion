/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface MFContentErrorDocument : NSObject

{
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *content;

- (void)dealloc;
- (id)initWithMimePart:(id)arg1;

@end
