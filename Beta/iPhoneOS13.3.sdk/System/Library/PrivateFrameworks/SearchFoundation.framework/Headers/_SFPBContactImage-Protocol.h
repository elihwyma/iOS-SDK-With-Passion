/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _SFPBContactImage <Swift>

@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (nonatomic) _Bool threeDTouchEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addContactIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)clearContactIdentifiers;
- (unsigned short)contactIdentifiersCount;
- (unsigned short)contactIdentifiersAtIndex: /* Error: Ran out of types for this method. */;

@end
