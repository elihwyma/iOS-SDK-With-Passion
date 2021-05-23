/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNVCardLineFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)version30LineFactory;
+ (id)version21LineFactory;

- (id)stringLineWithName:(id)arg1 value:(id)arg2;
- (id)versionPlaceholderLine;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (id)lineWithLiteralValue:(id)arg1;
- (id)dataLineWithName:(id)arg1 value:(id)arg2;

@end
