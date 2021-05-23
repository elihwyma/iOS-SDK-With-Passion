/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSCountableTextLocation : NSObject

{
    unsigned long long _characterIndex;
}

@property (readonly) unsigned long long characterIndex;
@property (readonly, getter=isEndOfDocument) _Bool endOfDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *type;

+ (id)endOfDocumentLocation;

- (long long)compare:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;

@end
