/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPStartNetworkSearchFeedback <Swift>

@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) int endpoint;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int lookupSelectionType;
@property (nonatomic) int tuscanyStatus;
@property (copy, nonatomic) NSData *bodyData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichTrigger;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)setHeaders:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)getHeaders:forKey: /* Error: Ran out of types for this method. */;

@end
