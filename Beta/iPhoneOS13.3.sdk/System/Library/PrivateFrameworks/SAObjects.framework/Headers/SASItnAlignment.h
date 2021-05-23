/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SASItnAlignment : AceObject <Swift>

@property (nonatomic) long long firstPostItnCharPos;
@property (nonatomic) long long firstPreItnTokenIndex;
@property (nonatomic) long long lastPostItnCharPos;
@property (nonatomic) long long lastPreItnTokenIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)itnAlignment;
+ (id)itnAlignmentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
