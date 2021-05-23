/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@protocol _INPBImageValue <Swift>

@property (copy, nonatomic) NSData *data;
@property (nonatomic, readonly) _Bool hasData;
@property (nonatomic) double height;
@property (nonatomic) _Bool hasHeight;
@property (copy, nonatomic) NSString *proxyServiceIdentifier;
@property (nonatomic, readonly) _Bool hasProxyServiceIdentifier;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic, readonly) _Bool hasUri;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;
@property (nonatomic) double width;
@property (nonatomic) _Bool hasWidth;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;

@end
