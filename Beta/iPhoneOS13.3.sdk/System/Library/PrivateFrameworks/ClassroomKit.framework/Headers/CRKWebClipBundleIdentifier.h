/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKWebClipBundleIdentifier : NSObject

{
    NSString *_stringValue;
}

@property (copy, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly, getter=isWebClipHostApplication) _Bool webClipHostApplication;
@property (nonatomic, readonly, getter=isSpecificWebClip) _Bool specificWebClip;

+ (id)webClipBundleIdentifierInString:(id)arg1;
+ (id)webClipHostApplicationBundleIdentifier;
+ (id)specificWebClipPrefix;
+ (id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)arg1;

- (id)init;
- (id)initWithString:(id)arg1;

@end
