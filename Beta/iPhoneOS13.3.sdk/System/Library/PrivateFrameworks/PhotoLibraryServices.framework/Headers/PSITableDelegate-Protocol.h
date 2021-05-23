/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@protocol PSITableDelegate

- (unsigned short)executeStatement:withResultEnumerationBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)executeStatement: /* Error: Ran out of types for this method. */;
- (unsigned short)statementFromString: /* Error: Ran out of types for this method. */;
- (unsigned short)executeStatementFromString: /* Error: Ran out of types for this method. */;
- (unsigned short)executeStatementFromString:withResultEnumerationBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareForNumberOfMatchingIds: /* Error: Ran out of types for this method. */;
- (unsigned short)unprepareMatchingIds;
- (unsigned short)bindMatchingIds: /* Error: Ran out of types for this method. */;
- (unsigned short)bindMatchingIds:range: /* Error: Ran out of types for this method. */;
- (unsigned short)bindMatchingIds:numberOfMatchingIds: /* Error: Ran out of types for this method. */;
- (unsigned short)unbindMatchingIds;
- (unsigned short)lastInsertedRowID;

@end
