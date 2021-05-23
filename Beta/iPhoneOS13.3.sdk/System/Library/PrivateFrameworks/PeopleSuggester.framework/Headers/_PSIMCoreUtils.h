/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@interface _PSIMCoreUtils : NSObject

+ (id)contactKeysToFetch;
+ (id)chatWithGUID:(id)arg1;
+ (id)recipientsForChat:(id)arg1 usingStore:(id)arg2;
+ (id)filterNamedGroupsOrIndividualChatsFromInteractions:(id)arg1 registry:(id)arg2;
+ (_Bool)contactIsMe:(id)arg1 usingStore:(id)arg2;

@end
