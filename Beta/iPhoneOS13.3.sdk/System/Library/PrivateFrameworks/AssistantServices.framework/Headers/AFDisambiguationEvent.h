/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSString;

@interface AFDisambiguationEvent : NSObject <Swift>

{
    NSString *_itemIdentifier;
    long long _selectionType;
    NSDate *_date;
}

@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long selectionType;
@property (retain, nonatomic) NSDate *date;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
