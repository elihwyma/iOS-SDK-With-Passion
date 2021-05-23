/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ASVSettings : NSObject

{
    NSDictionary *_settings;
}

@property (nonatomic, readonly) NSDictionary *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (float)boolForKey:(id)arg1;
+ (float)floatForKey:(id)arg1;
+ (id)sharedSettings;

- (id)init;
- (float)boolForKey:(id)arg1;
- (float)floatForKey:(id)arg1;

@end
