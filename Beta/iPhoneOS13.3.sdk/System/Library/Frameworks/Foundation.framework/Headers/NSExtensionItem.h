/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary;

@interface NSExtensionItem : NSObject <Swift>

{
    NSMutableDictionary *_userInfo;
}

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_matchingDictionaryRepresentation;

@end
