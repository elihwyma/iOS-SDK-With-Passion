/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime;

@protocol _INPBNote <Swift>

@property (copy, nonatomic) NSArray *contents;
@property (nonatomic, readonly) unsigned long long contentsCount;
@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (nonatomic, readonly) _Bool hasCreatedDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (nonatomic, readonly) _Bool hasModifiedDateTime;
@property (retain, nonatomic) _INPBDataString *title;
@property (nonatomic, readonly) _Bool hasTitle;

+ (unsigned short)contentType;

- (unsigned short)clearContents;
- (unsigned short)addContent: /* Error: Ran out of types for this method. */;
- (unsigned short)contentAtIndex: /* Error: Ran out of types for this method. */;

@end
