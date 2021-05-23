/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSDictionary.h>

@class NSNumber, NSString;

@interface NSDictionary (IMSharedUtilitiesAdditions)

@property (nonatomic, readonly) NSString *__im_associatedMessageSummary;
@property (nonatomic, readonly) NSNumber *__im_associatedMessageContentType;
@property (nonatomic, readonly) NSString *__im_associatedMessagePluginBundleID;
@property (nonatomic, readonly) NSString *__im_associatedMessagePluginDisplayName;

+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4;
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;

- (_Bool)boolValueForKey:(id)arg1 withDefault:(_Bool)arg2;
- (long long)integerValueForKey:(id)arg1 withDefault:(long long)arg2;
- (unsigned long long)unsignedIntegerValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (double)doubleValueForKey:(id)arg1 withDefault:(double)arg2;
- (float)floatValueForKey:(id)arg1 withDefault:(float)arg2;
- (long long)longValueForKey:(id)arg1 withDefault:(long long)arg2;
- (unsigned long long)unsignedLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (long long)longLongValueForKey:(id)arg1 withDefault:(long long)arg2;
- (unsigned long long)unsignedLongLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (_Bool)isArchivable_im;

@end
