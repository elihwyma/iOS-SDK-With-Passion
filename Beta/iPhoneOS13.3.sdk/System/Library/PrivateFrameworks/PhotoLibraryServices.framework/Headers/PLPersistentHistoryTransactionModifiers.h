/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPersistentHistoryTransactionModifiers : NSObject

{
    _Bool _syncChangeMarker;
    int _changeSource;
}

@property (nonatomic) _Bool syncChangeMarker;
@property (nonatomic) int changeSource;
@property (nonatomic, readonly) _Bool isSyncable;

+ (id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(_Bool)arg2;
+ (id)transactionModifiersFromTransactionAuthor:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithChangeSource:(int)arg1 syncChangeMarker:(_Bool)arg2;
- (id)encodeAsTransactionAuthor;
- (_Bool)updateFromTransactionAuthor:(id)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)_descriptionWithBuilder:(id)arg1;

@end
